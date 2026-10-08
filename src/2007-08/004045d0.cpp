// from server: 73% by colin
// roc 2007-08 004045d0  unit: ATL::CRegObject  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004045d0
//
// 004045d0  8b442404             mov eax, dword ptr [esp + 4]
// 004045d4  56                   push esi
// 004045d5  8bf1                 mov esi, ecx
// 004045d7  33c9                 xor ecx, ecx
// 004045d9  7705                 ja 0x4045e0
// 004045db  83f8ff               cmp eax, -1
// 004045de  760a                 jbe 0x4045ea
// 004045e0  6857000780           push 0x80070057
// 004045e5  e816caffff           call 0x401000
// 004045ea  3d00040000           cmp eax, 0x400
// 004045ef  760e                 jbe 0x4045ff
// 004045f1  50                   push eax
// 004045f2  8bce                 mov ecx, esi
// 004045f4  e887e2ffff           call 0x402880
// 004045f9  8b06                 mov eax, dword ptr [esi]
// 004045fb  5e                   pop esi
// 004045fc  c20400               ret 4
// 004045ff  8d4604               lea eax, [esi + 4]
// 00404602  8906                 mov dword ptr [esi], eax
// 00404604  5e                   pop esi
// 00404605  c20400               ret 4

struct S_func_004045d0 {
    void* m_p;
    void* m_p2;
    void f(unsigned int n);
};

extern "C" void __stdcall sub_401000(unsigned int code);
extern "C" void __stdcall sub_402880(void* p);

void S_func_004045d0::f(unsigned int n)
{
    if (n > 0x400 && n != 0xffffffff) {
        sub_401000(0x80070057);
    }
    if (n > 0x400) {
        sub_402880(this);
        return;
    }
    m_p = (char*)this + 4;
}
