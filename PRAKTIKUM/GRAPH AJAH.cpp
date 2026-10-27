#include <iostream>
using namespace std;

// Maksimal jumlah node/graf
const int node_maksimal = 100;

// Fungsi untuk menambahkan edge ke graf
void edge(int adj[][node_maksimal], int u, int v) {
    adj[u][v] = 1; // Tambah edge dari u ke v
    adj[v][u] = 1; // Jika graf tidak berarah, tambahkan juga edge dari v ke u
}

// Fungsi untuk menampilkan graf
void graph(int adj[][node_maksimal], int V) {
    for (int u = 0; u < V; ++u) {
        cout << "Node " << u << " terhubung dengan nodes: ";
        for (int v = 0; v < V; ++v) {
            if (adj[u][v] == 1) {
                cout << v << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    // mmenginput jumlah nodes dan edge
    int V, E;
    cout << "Masukkan jumlah nodes (V) dan edges (E): ";
    cin >> V >> E;

    // Membuat array untuk menyimpan graf
    int adj[node_maksimal][node_maksimal] = {0};

    cout << "Masukkan pasangan nodes untuk setiap edge (contoh: u v):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        edge(adj, u, v);
    }

    // Menampilkan graf
    cout << "list dari graf:" << endl;
    graph(adj, V);

    return 0;
}
