// from server: 94% by colin
// roc 2007-08 006735b0  unit: CXTPCustomizeSheet  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006735b0
//
// 006735b0  55                   push ebp
// 006735b1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006735b5  56                   push esi
// 006735b6  8b35388f8c00         mov esi, dword ptr [0x8c8f38]
// 006735bc  83c618               add esi, 0x18
// 006735bf  85ed                 test ebp, ebp
// 006735c1  7d0a                 jge 0x6735cd
// 006735c3  5e                   pop esi
// 006735c4  b801000000           mov eax, 1
// 006735c9  5d                   pop ebp
// 006735ca  c20c00               ret 0xc
// 006735cd  8b4e08               mov ecx, dword ptr [esi + 8]
// 006735d0  8b4604               mov eax, dword ptr [esi + 4]
// 006735d3  53                   push ebx
// 006735d4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006735d8  57                   push edi
// 006735d9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006735dd  57                   push edi
// 006735de  53                   push ebx
// 006735df  ffd0                 call eax
// 006735e1  85c0                 test eax, eax
// 006735e3  7413                 je 0x6735f8
// 006735e5  8b0e                 mov ecx, dword ptr [esi]
// 006735e7  57                   push edi
// 006735e8  53                   push ebx
// 006735e9  55                   push ebp
// 006735ea  51                   push ecx
// 006735eb  ff1530ee7700         call dword ptr [0x77ee30]
// 006735f1  5f                   pop edi
// 006735f2  5b                   pop ebx
// 006735f3  5e                   pop esi
// 006735f4  5d                   pop ebp
// 006735f5  c20c00               ret 0xc
// 006735f8  5f                   pop edi
// 006735f9  5b                   pop ebx
// 006735fa  5e                   pop esi
// 006735fb  b801000000           mov eax, 1
// 00673600  5d                   pop ebp
// 00673601  c20c00               ret 0xc

extern "C" __declspec(dllimport) unsigned long __stdcall CallNextHookEx(void*, int, unsigned int, unsigned int);

struct CXTPCustomizeSheet {
    int Hook(int, unsigned int, unsigned int);
};

extern unsigned char* g_ptr_8c8f38;

int CXTPCustomizeSheet::Hook(int nCode, unsigned int wParam, unsigned int lParam) {
    unsigned char* p = g_ptr_8c8f38 + 0x18;
    if (nCode < 0)
        return 1;
    int (*fn)(unsigned int, unsigned int) = *(int (**)(unsigned int, unsigned int))(p + 4);
    if (fn(wParam, lParam) != 0) {
        void* h = *(void**)p;
        return CallNextHookEx(h, nCode, wParam, lParam);
    }
    return 1;
}
