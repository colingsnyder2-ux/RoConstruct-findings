// from server: 91% by colin
// roc 2007-08 004b8980  unit: RakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8980
//
// 004b8980  0fb68128020000       movzx eax, byte ptr [ecx + 0x228]
// 004b8987  56                   push esi
// 004b8988  8b742408             mov esi, dword ptr [esp + 8]
// 004b898c  85f6                 test esi, esi
// 004b898e  750a                 jne 0x4b899a
// 004b8990  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8994  8901                 mov dword ptr [ecx], eax
// 004b8996  5e                   pop esi
// 004b8997  c20800               ret 8
// 004b899a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b899e  3902                 cmp dword ptr [edx], eax
// 004b89a0  7e02                 jle 0x4b89a4
// 004b89a2  8902                 mov dword ptr [edx], eax
// 004b89a4  8b02                 mov eax, dword ptr [edx]
// 004b89a6  85c0                 test eax, eax
// 004b89a8  7e11                 jle 0x4b89bb
// 004b89aa  50                   push eax
// 004b89ab  81c128010000         add ecx, 0x128
// 004b89b1  51                   push ecx
// 004b89b2  56                   push esi
// 004b89b3  e894831700           call 0x630d4c
// 004b89b8  83c40c               add esp, 0xc
// 004b89bb  5e                   pop esi
// 004b89bc  c20800               ret 8

struct RakPeer {
    char pad[0x228];
    unsigned char m_field228;
    void sub_630d4c(int, int, int);
    void func(int, int);
};

void RakPeer::func(int arg1, int arg2)
{
    unsigned int v = m_field228;
    if (arg1 == 0) {
        *(int*)arg2 = v;
        return;
    }
    int* p = (int*)arg2;
    if (*p > (int)v)
        *p = v;
    int n = *p;
    if (n > 0) {
        sub_630d4c(arg1, (int)(this->pad + 0x128), n);
    }
}
