// from server: 100% by king_originala
// roc 2008-06 00541ca0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541ca0
//
// 00541ca0  55                   push ebp
// 00541ca1  8bec                 mov ebp, esp
// 00541ca3  83ec2c               sub esp, 0x2c
// 00541ca6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00541ca9  8d45f0               lea eax, [ebp - 0x10]
// 00541cac  50                   push eax
// 00541cad  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541cb0  e8fbecffff           call 0x5409b0
// 00541cb5  8b08                 mov ecx, dword ptr [eax]
// 00541cb7  8b5004               mov edx, dword ptr [eax + 4]
// 00541cba  894df8               mov dword ptr [ebp - 8], ecx
// 00541cbd  8955fc               mov dword ptr [ebp - 4], edx
// 00541cc0  8d45e0               lea eax, [ebp - 0x20]
// 00541cc3  50                   push eax
// 00541cc4  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541cc7  e874d40000           call 0x54f140
// 00541ccc  8b08                 mov ecx, dword ptr [eax]
// 00541cce  8b5004               mov edx, dword ptr [eax + 4]
// 00541cd1  894de8               mov dword ptr [ebp - 0x18], ecx
// 00541cd4  8955ec               mov dword ptr [ebp - 0x14], edx
// 00541cd7  8b45fc               mov eax, dword ptr [ebp - 4]
// 00541cda  50                   push eax
// 00541cdb  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00541cde  51                   push ecx
// 00541cdf  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00541ce2  52                   push edx
// 00541ce3  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00541ce6  50                   push eax
// 00541ce7  8d4dd8               lea ecx, [ebp - 0x28]
// 00541cea  51                   push ecx
// 00541ceb  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541cee  e8ed120000           call 0x542fe0
// 00541cf3  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 00541cf6  8b4218               mov eax, dword ptr [edx + 0x18]
// 00541cf9  50                   push eax
// 00541cfa  e831a90000           call 0x54c630
// 00541cff  83c404               add esp, 4
// 00541d02  50                   push eax
// 00541d03  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d06  83c110               add ecx, 0x10
// 00541d09  e8f2db0000           call 0x54f900
// 00541d0e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d11  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00541d14  52                   push edx
// 00541d15  e826a90000           call 0x54c640
// 00541d1a  83c404               add esp, 4
// 00541d1d  50                   push eax
// 00541d1e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d21  83c110               add ecx, 0x10
// 00541d24  e8d7db0000           call 0x54f900
// 00541d29  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00541d2c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00541d2f  51                   push ecx
// 00541d30  e86b000000           call 0x541da0
// 00541d35  83c404               add esp, 4
// 00541d38  50                   push eax
// 00541d39  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d3c  83c110               add ecx, 0x10
// 00541d3f  e8bcdb0000           call 0x54f900
// 00541d44  6a01                 push 1
// 00541d46  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 00541d49  8b4218               mov eax, dword ptr [edx + 0x18]
// 00541d4c  50                   push eax
// 00541d4d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d50  83c10c               add ecx, 0xc
// 00541d53  e8b8180000           call 0x543610
// 00541d58  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00541d5b  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 00541d62  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 00541d65  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 00541d6c  8be5                 mov esp, ebp
// 00541d6e  5d                   pop ebp
// 00541d6f  c3                   ret 

#pragma optimize("", off)

struct VChunk {
    char pad[8];
};

struct Pair {
    void* first;
    void* second;
};

struct Releaser {
    char pad[4];
    void release(VChunk*, int);
};

struct Collector {
    char pad[8];
    void append(char*);
};

extern char* __cdecl firstPart(VChunk*);
extern char* __cdecl secondPart(VChunk*);
extern char* __cdecl thirdPart(VChunk*);

struct S {
    char pad[12];
    Releaser releaser;
    Collector collector;
    VChunk* chunk;
    void* other;

    Pair* first(Pair*);
    Pair* second(Pair*);
    Pair combine(Pair, Pair);
    void f();
};

void S::f()
{
    Pair a;
    Pair firstTemporary;
    Pair b;
    Pair secondTemporary;
    a = *first(&secondTemporary);
    b = *second(&firstTemporary);
    combine(b, a);
    collector.append(firstPart(chunk));
    collector.append(secondPart(chunk));
    collector.append(thirdPart(chunk));
    releaser.release(chunk, 1);
    chunk = 0;
    other = 0;
}
