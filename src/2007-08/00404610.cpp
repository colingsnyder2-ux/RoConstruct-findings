// from server: 70% by colin
// roc 2007-08 00404610  unit: ATL::CRegObject  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404610
//
// 00404610  8b442404             mov eax, dword ptr [esp + 4]
// 00404614  56                   push esi
// 00404615  8bf1                 mov esi, ecx
// 00404617  33c9                 xor ecx, ecx
// 00404619  7705                 ja 0x404620
// 0040461b  83f8ff               cmp eax, -1
// 0040461e  760a                 jbe 0x40462a
// 00404620  6857000780           push 0x80070057
// 00404625  e8d6c9ffff           call 0x401000
// 0040462a  3d00010000           cmp eax, 0x100
// 0040462f  760e                 jbe 0x40463f
// 00404631  50                   push eax
// 00404632  8bce                 mov ecx, esi
// 00404634  e847e2ffff           call 0x402880
// 00404639  8b06                 mov eax, dword ptr [esi]
// 0040463b  5e                   pop esi
// 0040463c  c20400               ret 4
// 0040463f  8d4604               lea eax, [esi + 4]
// 00404642  8906                 mov dword ptr [esi], eax
// 00404644  5e                   pop esi
// 00404645  c20400               ret 4

struct S_func_00404610 {
    void* m_p;
    void* f(unsigned int n);
};

extern "C" void __stdcall sub_401000(unsigned int code);
extern "C" void __fastcall sub_402880(S_func_00404610* self, unsigned int n);

void* S_func_00404610::f(unsigned int n)
{
    if (n > 0xffffffffu) {
        sub_401000(0x80070057u);
    }
    if (n > 0x100u) {
        sub_402880(this, n);
        return m_p;
    }
    m_p = (char*)this + 4;
    return m_p;
}
