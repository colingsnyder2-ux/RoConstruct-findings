// from server: 82% by colin
// roc 2007-08 00724ff9  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724ff9
//
// 00724ff9  56                   push esi
// 00724ffa  8bf1                 mov esi, ecx
// 00724ffc  e8f8feffff           call 0x724ef9
// 00725001  56                   push esi
// 00725002  c7062c000000         mov dword ptr [esi], 0x2c
// 00725008  e85efeffff           call 0x724e6b
// 0072500d  85c0                 test eax, eax
// 0072500f  7d0a                 jge 0x72501b
// 00725011  c60598be8b0001       mov byte ptr [0x8bbe98], 1
// 00725018  832600               and dword ptr [esi], 0
// 0072501b  8bc6                 mov eax, esi
// 0072501d  5e                   pop esi
// 0072501e  c3                   ret 

struct CXTIconHandle {
    int m_domIcon;
    CXTIconHandle();
};

extern "C" void __cdecl sub_724ef9();
extern "C" int __cdecl sub_724e6b(void*);

extern unsigned char g_flag;

CXTIconHandle::CXTIconHandle()
{
    sub_724ef9();
    this->m_domIcon = 0x2c;
    if (sub_724e6b(this) < 0) {
        g_flag = 1;
        this->m_domIcon = 0;
    }
}
