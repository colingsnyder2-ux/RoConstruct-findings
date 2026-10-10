// from server: 44% by atomic.potato
struct Mesh
{
    unsigned char reserved[0x7f4];
    unsigned char value;
    unsigned char getValue();
};

unsigned char Mesh::getValue()
{
    return value;
}
