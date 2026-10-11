// from server: 100% by atomic.potato
// roc 2009-06 004fe2e0  unit: RakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fe2e0
//
// 004fe2e0  0fb68138050000       movzx eax, byte ptr [ecx + 0x538]
// 004fe2e7  56                   push esi
// 004fe2e8  8b742408             mov esi, dword ptr [esp + 8]
// 004fe2ec  85f6                 test esi, esi
// 004fe2ee  750a                 jne 0x4fe2fa
// 004fe2f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fe2f4  8901                 mov dword ptr [ecx], eax
// 004fe2f6  5e                   pop esi
// 004fe2f7  c20800               ret 8
// 004fe2fa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fe2fe  3902                 cmp dword ptr [edx], eax
// 004fe300  7e02                 jle 0x4fe304
// 004fe302  8902                 mov dword ptr [edx], eax
// 004fe304  8b02                 mov eax, dword ptr [edx]
// 004fe306  85c0                 test eax, eax
// 004fe308  7e11                 jle 0x4fe31b
// 004fe30a  50                   push eax
// 004fe30b  81c138040000         add ecx, 0x438
// 004fe311  51                   push ecx
// 004fe312  56                   push esi
// 004fe313  e89ebb2100           call 0x719eb6
// 004fe318  83c40c               add esp, 0xc
// 004fe31b  5e                   pop esi
// 004fe31c  c20800               ret 8

extern "C" void __cdecl sub_719EB6(void* dst, const void* src, int count);

struct RakPeer {
    char pad_0000[0x438];
    unsigned char m_field_438[0x100];
    unsigned char m_field_538;
    void f(unsigned char* a1, int* a2);
};

void RakPeer::f(unsigned char* a1, int* a2)
{
    int v = m_field_538;
    if (a1 == 0) {
        *a2 = v;
        return;
    }
    if (*a2 > v)
        *a2 = v;
    int n = *a2;
    if (n > 0)
        sub_719EB6(a1, m_field_438, n);
}
