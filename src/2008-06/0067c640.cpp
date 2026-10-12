// from server: 92% by king_originala
struct Node {
    int value;
    float priority;
};

void __cdecl f(Node* first, int hole, int top, Node value)
{
    int parent = (hole - 1) / 2;
    while (top < hole && value.priority > first[parent].priority) {
        first[hole] = first[parent];
        hole = parent;
        parent = (hole - 1) / 2;
    }
    first[hole] = value;
}
