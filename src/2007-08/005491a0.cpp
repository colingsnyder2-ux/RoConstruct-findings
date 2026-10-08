// from server: 26% by colin
// roc 2007-08 005491a0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005491a0
//
// 005491a0  51                   push ecx
// 005491a1  56                   push esi
// 005491a2  57                   push edi
// 005491a3  83ec20               sub esp, 0x20
// 005491a6  8bf1                 mov esi, ecx
// 005491a8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005491ac  8bc4                 mov eax, esp
// 005491ae  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005491b6  89642428             mov dword ptr [esp + 0x28], esp
// 005491ba  51                   push ecx
// 005491bb  50                   push eax
// 005491bc  e8efbeffff           call 0x5450b0
// 005491c1  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005491c5  83c408               add esp, 8
// 005491c8  57                   push edi
// 005491c9  8bce                 mov ecx, esi
// 005491cb  e8d0fbffff           call 0x548da0
// 005491d0  8bc7                 mov eax, edi
// 005491d2  5f                   pop edi
// 005491d3  5e                   pop esi
// 005491d4  59                   pop ecx
// 005491d5  c20800               ret 8

struct S_func_005491a0 {
    void f(int a1, int a2);
};

extern "C" void __cdecl func_005450b0(void*, void*);
extern "C" void __cdecl func_00548da0(void*, int);

void S_func_005491a0::f(int a1, int a2)
{
    char buf[0x28];
    *(void**)(buf + 0x28) = 0;
    *(void**)(buf + 0x28) = buf;
    func_005450b0(buf, (void*)a1);
    func_00548da0(this, a2);
}
