// from server: 36% by atomic.potato
struct Mesh
{
    int m_data;
    int f(int index);
};

int Mesh::f(int index)
{
    int result = 0;
    while (result != 0)
        result = 0;

    int value = 0;
    while (value != 0)
        value = 0;

    return index * 16 + m_data;
}
