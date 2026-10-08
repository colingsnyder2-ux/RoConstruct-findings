// from server: 71% by colin
// roc 2007-08 005fe2a0  unit: RBX::AxisMoveTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe2a0
//
// 005fe2a0  51                   push ecx
// 005fe2a1  56                   push esi
// 005fe2a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fe2a6  83c128               add ecx, 0x28
// 005fe2a9  51                   push ecx
// 005fe2aa  8bce                 mov ecx, esi
// 005fe2ac  c744240800000000     mov dword ptr [esp + 8], 0
// 005fe2b4  ff159ce67700         call dword ptr [0x77e69c]
// 005fe2ba  8bc6                 mov eax, esi
// 005fe2bc  5e                   pop esi
// 005fe2bd  59                   pop ecx
// 005fe2be  c20400               ret 4

struct AxisMoveTool {
    char pad[0x28];
    void* method(void* arg);
};

extern "C" void* __stdcall sub_77e69c(void*, void*);

void* AxisMoveTool::method(void* arg)
{
    void* q = 0;
    sub_77e69c(&q, (char*)this + 0x28);
    return arg;
}
