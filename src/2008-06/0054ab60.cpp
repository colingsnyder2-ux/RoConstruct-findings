// from server: 81% by king_originala
#pragma optimize("", off)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Mesh {
    unsigned char storage[48];
    Mesh();
};

extern Mesh* mesh;

void __cdecl initializeMesh()
{
    mesh = new Mesh;
}
