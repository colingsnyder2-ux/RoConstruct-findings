// from server: 31% by colin
// roc 2007-08 00714080  unit: CXTCaptionThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714080
//
// 00714080  6aff                 push -1
// 00714082  68fad87300           push 0x73d8fa
// 00714087  64a100000000         mov eax, dword ptr fs:[0]
// 0071408d  50                   push eax
// 0071408e  51                   push ecx
// 0071408f  56                   push esi
// 00714090  a188518b00           mov eax, dword ptr [0x8b5188]
// 00714095  33c4                 xor eax, esp
// 00714097  50                   push eax
// 00714098  8d44240c             lea eax, [esp + 0xc]
// 0071409c  64a300000000         mov dword ptr fs:[0], eax
// 007140a2  6a14                 push 0x14
// 007140a4  e84dbef1ff           call 0x62fef6
// 007140a9  8bf0                 mov esi, eax
// 007140ab  83c404               add esp, 4
// 007140ae  89742408             mov dword ptr [esp + 8], esi
// 007140b2  33c0                 xor eax, eax
// 007140b4  3bf0                 cmp esi, eax
// 007140b6  89442414             mov dword ptr [esp + 0x14], eax
// 007140ba  740f                 je 0x7140cb
// 007140bc  8bce                 mov ecx, esi
// 007140be  e8fddef7ff           call 0x691fc0
// 007140c3  c706dcea7d00         mov dword ptr [esi], 0x7deadc
// 007140c9  8bc6                 mov eax, esi
// 007140cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007140cf  64890d00000000       mov dword ptr fs:[0], ecx
// 007140d6  59                   pop ecx
// 007140d7  5e                   pop esi
// 007140d8  83c410               add esp, 0x10
// 007140db  c3                   ret 

extern "C" void* __cdecl func_0062fef6(unsigned int);

struct Inner
{
    void init();
};

struct CXTCaptionThemeOffice2003
{
    void* construct();
};

void* CXTCaptionThemeOffice2003::construct()
{
    void* p = func_0062fef6(0x14);
    if (p != 0)
    {
        ((Inner*)p)->init();
        *(void**)p = (void*)0x7deadc;
    }
    return p;
}
