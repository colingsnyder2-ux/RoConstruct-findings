// from server: 94% by colin
// roc 2007-08 00673550  unit: CXTPCustomizeSheet  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673550
//
// 00673550  55                   push ebp
// 00673551  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00673555  56                   push esi
// 00673556  8b35388f8c00         mov esi, dword ptr [0x8c8f38]
// 0067355c  83c60c               add esi, 0xc
// 0067355f  85ed                 test ebp, ebp
// 00673561  7d0a                 jge 0x67356d
// 00673563  5e                   pop esi
// 00673564  b801000000           mov eax, 1
// 00673569  5d                   pop ebp
// 0067356a  c20c00               ret 0xc
// 0067356d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00673570  8b4604               mov eax, dword ptr [esi + 4]
// 00673573  53                   push ebx
// 00673574  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00673578  57                   push edi
// 00673579  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0067357d  57                   push edi
// 0067357e  53                   push ebx
// 0067357f  ffd0                 call eax
// 00673581  85c0                 test eax, eax
// 00673583  7413                 je 0x673598
// 00673585  8b0e                 mov ecx, dword ptr [esi]
// 00673587  57                   push edi
// 00673588  53                   push ebx
// 00673589  55                   push ebp
// 0067358a  51                   push ecx
// 0067358b  ff1530ee7700         call dword ptr [0x77ee30]
// 00673591  5f                   pop edi
// 00673592  5b                   pop ebx
// 00673593  5e                   pop esi
// 00673594  5d                   pop ebp
// 00673595  c20c00               ret 0xc
// 00673598  5f                   pop edi
// 00673599  5b                   pop ebx
// 0067359a  5e                   pop esi
// 0067359b  b801000000           mov eax, 1
// 006735a0  5d                   pop ebp
// 006735a1  c20c00               ret 0xc

extern "C" __declspec(dllimport) unsigned long __stdcall CallNextHookEx(void*, int, unsigned int, unsigned int);

struct CXTPCustomizeSheet {
    int OnCbt(int, unsigned int, unsigned int);
};

extern unsigned char* g_pHookData;

int CXTPCustomizeSheet::OnCbt(int nCode, unsigned int wParam, unsigned int lParam) {
    unsigned char* p = g_pHookData + 0xc;
    if (nCode < 0)
        return 1;
    int (*proc)(unsigned int, unsigned int) = *(int (**)(unsigned int, unsigned int))(p + 4);
    if (proc(wParam, lParam)) {
        void* hook = *(void**)p;
        return CallNextHookEx(hook, nCode, wParam, lParam);
    }
    return 1;
}
