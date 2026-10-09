// from server: 62% by colin
// roc 2007-08 0044a700  unit: CRobloxApp  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a700
//
// 0044a700  53                   push ebx
// 0044a701  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0044a705  56                   push esi
// 0044a706  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044a70a  57                   push edi
// 0044a70b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0044a70f  83ec0c               sub esp, 0xc
// 0044a712  8bc4                 mov eax, esp
// 0044a714  ba108a4400           mov edx, 0x448a10
// 0044a719  8910                 mov dword ptr [eax], edx
// 0044a71b  894804               mov dword ptr [eax + 4], ecx
// 0044a71e  897808               mov dword ptr [eax + 8], edi
// 0044a721  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0044a725  57                   push edi
// 0044a726  53                   push ebx
// 0044a727  895c2428             mov dword ptr [esp + 0x28], ebx
// 0044a72b  e800fbffff           call 0x44a230
// 0044a730  83c414               add esp, 0x14
// 0044a733  85f6                 test esi, esi
// 0044a735  8bd8                 mov ebx, eax
// 0044a737  7406                 je 0x44a73f
// 0044a739  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0044a73d  7406                 je 0x44a745
// 0044a73f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0044a745  33c0                 xor eax, eax
// 0044a747  3bdf                 cmp ebx, edi
// 0044a749  5f                   pop edi
// 0044a74a  5e                   pop esi
// 0044a74b  0f94c0               sete al
// 0044a74e  5b                   pop ebx
// 0044a74f  c21000               ret 0x10

struct CRobloxApp
{
    bool f(void* a, void* b, void* c, void* d);
};

extern "C" void __stdcall _invalid_parameter_noinfo(void);

extern "C" int __fastcall sub_44a230(void* a, void* b, void* c, void* d);

bool CRobloxApp::f(void* a, void* b, void* c, void* d)
{
    int result = sub_44a230(a, b, c, d);
    if (a != 0 && a != d)
    {
        _invalid_parameter_noinfo();
    }
    return result == (int)d;
}
