// from server: 100% by king_originala
// roc 2008-06 00465d70  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465d70
//
// 00465d70  8b442414             mov eax, dword ptr [esp + 0x14]
// 00465d74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00465d78  53                   push ebx
// 00465d79  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00465d7d  56                   push esi
// 00465d7e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00465d82  57                   push edi
// 00465d83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00465d87  53                   push ebx
// 00465d88  50                   push eax
// 00465d89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00465d8d  52                   push edx
// 00465d8e  56                   push esi
// 00465d8f  50                   push eax
// 00465d90  57                   push edi
// 00465d91  e870b32300           call 0x6a1106
// 00465d96  8bc6                 mov eax, esi
// 00465d98  8d5001               lea edx, [eax + 1]
// 00465d9b  eb03                 jmp 0x465da0
// 00465d9d  8d4900               lea ecx, [ecx]
// 00465da0  8a08                 mov cl, byte ptr [eax]
// 00465da2  40                   inc eax
// 00465da3  84c9                 test cl, cl
// 00465da5  75f9                 jne 0x465da0
// 00465da7  2bc2                 sub eax, edx
// 00465da9  7520                 jne 0x465dcb
// 00465dab  57                   push edi
// 00465dac  e8ff7efbff           call 0x41dcb0
// 00465db1  83c404               add esp, 4
// 00465db4  85c0                 test eax, eax
// 00465db6  7413                 je 0x465dcb
// 00465db8  57                   push edi
// 00465db9  e892fdffff           call 0x465b50
// 00465dbe  83c404               add esp, 4
// 00465dc1  84c0                 test al, al
// 00465dc3  7506                 jne 0x465dcb
// 00465dc5  c70301000000         mov dword ptr [ebx], 1
// 00465dcb  5f                   pop edi
// 00465dcc  5e                   pop esi
// 00465dcd  5b                   pop ebx
// 00465dce  c21800               ret 0x18

extern "C" unsigned int __cdecl strlen(const char*);
extern long __cdecl checkValue(void*);
extern bool __cdecl checkAllowed(void*);

struct B
{
    void navigate(const char*, unsigned long, const char*, void*, const char*, int*);
};

struct S : B
{
    void navigate(const char*, unsigned long, const char*, void*, const char*, int*);
};

void S::navigate(const char* url, unsigned long flags, const char* target,
                 void* data, const char* headers, int* cancel)
{
    B::navigate(url, flags, target, data, headers, cancel);
    if (strlen(target) == 0 && checkValue((void*)url) &&
        !checkAllowed((void*)url))
        *cancel = 1;
}
