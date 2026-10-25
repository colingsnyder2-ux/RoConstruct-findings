// from server: 44% by atomic.potato
// roc 2011-06 008f1b70  unit: CXTCaptionButtonTheme  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1b70
//
// 008f1b70  6aff                 push -1
// 008f1b72  68c8e9a000           push 0xa0e9c8
// 008f1b77  64a100000000         mov eax, dword ptr fs:[0]
// 008f1b7d  50                   push eax
// 008f1b7e  83ec10               sub esp, 0x10
// 008f1b81  53                   push ebx
// 008f1b82  55                   push ebp
// 008f1b83  56                   push esi
// 008f1b84  57                   push edi
// 008f1b85  a12058c900           mov eax, dword ptr [0xc95820]
// 008f1b8a  33c4                 xor eax, esp
// 008f1b8c  50                   push eax
// 008f1b8d  8d442424             lea eax, [esp + 0x24]
// 008f1b91  64a300000000         mov dword ptr fs:[0], eax
// 008f1b97  8bf1                 mov esi, ecx
// 008f1b99  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008f1b9d  8bbbac000000         mov edi, dword ptr [ebx + 0xac]
// 008f1ba3  85ff                 test edi, edi
// 008f1ba5  7504                 jne 0x8f1bab
// 008f1ba7  33c0                 xor eax, eax
// 008f1ba9  eb03                 jmp 0x8f1bae
// 008f1bab  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f1bae  50                   push eax
// 008f1baf  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f1bb5  85c0                 test eax, eax
// 008f1bb7  0f8498000000         je 0x8f1c55
// 008f1bbd  80bf8100000000       cmp byte ptr [edi + 0x81], 0
// 008f1bc4  0f848b000000         je 0x8f1c55
// 008f1bca  8d8fd0000000         lea ecx, [edi + 0xd0]
// 008f1bd0  894c2440             mov dword ptr [esp + 0x40], ecx
// 008f1bd4  ff15b026a400         call dword ptr [0xa426b0]
// 008f1bda  84c0                 test al, al
// 008f1bdc  7577                 jne 0x8f1c55
// 008f1bde  8b06                 mov eax, dword ptr [esi]
// 008f1be0  8b5020               mov edx, dword ptr [eax + 0x20]
// 008f1be3  53                   push ebx
// 008f1be4  8bce                 mov ecx, esi
// 008f1be6  ffd2                 call edx
// 008f1be8  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008f1bec  50                   push eax
// 008f1bed  57                   push edi
// 008f1bee  8d4c241c             lea ecx, [esp + 0x1c]
// 008f1bf2  e829b5f6ff           call 0x85d120
// 008f1bf7  8b06                 mov eax, dword ptr [esi]
// 008f1bf9  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f1bfc  8b2f                 mov ebp, dword ptr [edi]
// 008f1bfe  53                   push ebx
// 008f1bff  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008f1c03  53                   push ebx
// 008f1c04  8bce                 mov ecx, esi
// 008f1c06  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008f1c0e  ffd2                 call edx
// 008f1c10  50                   push eax
// 008f1c11  8b4538               mov eax, dword ptr [ebp + 0x38]
// 008f1c14  8bcf                 mov ecx, edi
// 008f1c16  ffd0                 call eax
// 008f1c18  f6c301               test bl, 1
// 008f1c1b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008f1c1f  7411                 je 0x8f1c32
// 008f1c21  837e1800             cmp dword ptr [esi + 0x18], 0
// 008f1c25  740b                 je 0x8f1c32
// 008f1c27  6a01                 push 1
// 008f1c29  6a01                 push 1
// 008f1c2b  53                   push ebx
// 008f1c2c  ff15601ca400         call dword ptr [0xa41c60]
// 008f1c32  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f1c36  6825880000           push 0x8825
// 008f1c3b  53                   push ebx
// 008f1c3c  51                   push ecx
// 008f1c3d  8bcf                 mov ecx, edi
// 008f1c3f  e8ace4f1ff           call 0x8100f0
// 008f1c44  8d4c2414             lea ecx, [esp + 0x14]
// 008f1c48  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008f1c50  e84bb5f6ff           call 0x85d1a0
// 008f1c55  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f1c59  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1c60  59                   pop ecx
// 008f1c61  5f                   pop edi
// 008f1c62  5e                   pop esi
// 008f1c63  5d                   pop ebp
// 008f1c64  5b                   pop ebx
// 008f1c65  83c41c               add esp, 0x1c
// 008f1c68  c21000               ret 0x10





struct CXTPButton {
    char pad0[0xac];
    void* field_ac;
};

struct CXTPResource {
    char pad0[0x81];
    char field_81;
    char pad1[0x4e];
    char field_d0[0x10];
};

extern "C" {
    int __stdcall IsWindow(void* hWnd);
    void __stdcall OffsetRect(void* lprc, int dx, int dy);
}

extern "C" void __cdecl sub_85d120(void* dest, void* src, void* rect);
extern "C" void __cdecl sub_85d1a0(void* p);
extern "C" void __cdecl sub_8100f0(void* pRect, void* pButton, int n);

struct CXTCaptionButtonTheme {
    void RefreshMetrics(void* pButton, int nState, int nStyle, int nFlags);
};

void CXTCaptionButtonTheme::RefreshMetrics(void* pButton, int nState, int nStyle, int nFlags)
{
    CXTPButton* pBtn = (CXTPButton*)pButton;
    CXTPResource* pRes = (CXTPResource*)pBtn->field_ac;
    void* hWnd;
    if (pRes == 0)
        hWnd = 0;
    else
        hWnd = *(void**)((char*)pRes + 0x20);
    if (!IsWindow(hWnd))
        return;
    if (pRes->field_81 == 0)
        return;
    if (*(char*)pRes->field_d0 != 0)
        return;
    void* pTheme = *(void**)this;
    void* pfn = *(void**)((char*)pTheme + 0x20);
    void* result = ((void* (__thiscall*)(void*, void*))pfn)(this, pButton);
    void* local;
    void* pRect = &local;
    sub_85d120(&local, result, pRect);
    void* pTheme2 = *(void**)this;
    void* pfn2 = *(void**)((char*)pTheme2 + 0x48);
    void* vtable = *(void**)pRect;
    void* result2 = ((void* (__thiscall*)(void*, void*, void*))pfn2)(this, pButton, pRect);
    void* pfn3 = *(void**)((char*)vtable + 0x38);
    ((void (__thiscall*)(void*, void*))pfn3)(pRect, result2);
    if ((nState & 1) && *(void**)((char*)this + 0x18) != 0)
        OffsetRect(pRect, 1, 1);
    sub_8100f0(pRect, pButton, 0x8825);
    sub_85d1a0(&local);
}
