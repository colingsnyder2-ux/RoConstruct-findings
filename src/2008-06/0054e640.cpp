// from server: 100% by king_originala
// roc 2008-06 0054e640  unit: RBX::RenderBase::Mesh  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e640
//
// 0054e640  55                   push ebp
// 0054e641  8bec                 mov ebp, esp
// 0054e643  51                   push ecx
// 0054e644  894dfc               mov dword ptr [ebp - 4], ecx
// 0054e647  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e64a  e8b1130000           call 0x54fa00
// 0054e64f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e652  894118               mov dword ptr [ecx + 0x18], eax
// 0054e655  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054e658  8b4218               mov eax, dword ptr [edx + 0x18]
// 0054e65b  50                   push eax
// 0054e65c  e89fdfffff           call 0x54c600
// 0054e661  83c404               add esp, 4
// 0054e664  c60001               mov byte ptr [eax], 1
// 0054e667  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e66a  e8813dffff           call 0x5423f0
// 0054e66f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e672  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054e675  8910                 mov dword ptr [eax], edx
// 0054e677  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e67a  e861220000           call 0x5508e0
// 0054e67f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e682  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054e685  8910                 mov dword ptr [eax], edx
// 0054e687  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e68a  e831e8ffff           call 0x54cec0
// 0054e68f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e692  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054e695  8910                 mov dword ptr [eax], edx
// 0054e697  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e69a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 0054e6a1  8be5                 mov esp, ebp
// 0054e6a3  5d                   pop ebp
// 0054e6a4  c3                   ret 

struct VChunk;
extern char* __cdecl flag(VChunk*);

struct Mesh {
    char pad[0x18];
    VChunk* chunk;
    int state;

    VChunk* acquire();
    VChunk** slot1();
    VChunk** slot2();
    char* get();
    void f();
};

#pragma optimize("", off)
void Mesh::f()
{
    chunk = acquire();
    *flag(chunk) = 1;
    *slot1() = chunk;
    *slot2() = chunk;
    *(VChunk**)get() = chunk;
    state = 0;
}
#pragma optimize("", on)
