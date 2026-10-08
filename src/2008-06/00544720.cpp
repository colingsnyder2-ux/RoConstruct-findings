// from server: 47% by colin
// roc 2008-06 00544720  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544720
//
// 00544720  55                   push ebp
// 00544721  8bec                 mov ebp, esp
// 00544723  8b4508               mov eax, dword ptr [ebp + 8]
// 00544726  83c01c               add eax, 0x1c
// 00544729  5d                   pop ebp
// 0054472a  c3                   ret 

struct Chunk {
    unsigned int volume;
    Chunk();
    bool isEmpty() const;
};

extern "C" __declspec(dllimport) void __stdcall SomeFunction(void*);

Chunk::Chunk() {
    volume = 0;
}

bool Chunk::isEmpty() const {
    return volume == 0;
}

extern "C" __declspec(dllimport) void __stdcall SomeFunction(void*);

void __stdcall FreeChunk(Chunk* chunk) {
    SomeFunction(chunk);
}
