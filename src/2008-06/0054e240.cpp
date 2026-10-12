// from server: 97% by king_originala
#pragma optimize("", off)

struct VChunk {
    char pad[8];
};

struct Pair {
    char* first;
    char* second;
};

extern char* __cdecl chunkFirst(VChunk*);
extern char* __cdecl chunkLast(VChunk*);
extern char* __cdecl chunkData(VChunk*);

struct ChunkList {
    char storage[4];
    void remove(VChunk*, int);
};

struct PointerList {
    char storage[8];
    void remove(char*);
};

struct Mesh {
    char padding[12];
    ChunkList chunks;
    PointerList pointers;
    VChunk* chunk;
    int count;

    Pair firstRange();
    Pair secondRange();
    Pair combine(Pair, Pair);
    void clearChunk();
};

void Mesh::clearChunk()
{
    Pair first;
    first = firstRange();
    Pair second;
    second = secondRange();
    combine(second, first);
    pointers.remove(chunkFirst(chunk));
    pointers.remove(chunkLast(chunk));
    pointers.remove(chunkData(chunk));
    chunks.remove(chunk, 1);
    chunk = 0;
    count = 0;
}
