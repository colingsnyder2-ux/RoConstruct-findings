// from server: 81% by colin
// roc 2007-08 006fdb60  unit: seg_006f0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fdb60
//
// 006fdb60  83ec10               sub esp, 0x10
// 006fdb63  56                   push esi
// 006fdb64  57                   push edi
// 006fdb65  8bf9                 mov edi, ecx
// 006fdb67  8d7710               lea esi, [edi + 0x10]
// 006fdb6a  56                   push esi
// 006fdb6b  ff15dced7700         call dword ptr [0x77eddc]
// 006fdb71  85c0                 test eax, eax
// 006fdb73  7539                 jne 0x6fdbae
// 006fdb75  8b06                 mov eax, dword ptr [esi]
// 006fdb77  8b4e04               mov ecx, dword ptr [esi + 4]
// 006fdb7a  8b5608               mov edx, dword ptr [esi + 8]
// 006fdb7d  89442408             mov dword ptr [esp + 8], eax
// 006fdb81  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fdb84  894c240c             mov dword ptr [esp + 0xc], ecx
// 006fdb88  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006fdb8b  89442414             mov dword ptr [esp + 0x14], eax
// 006fdb8f  89542410             mov dword ptr [esp + 0x10], edx
// 006fdb93  8b11                 mov edx, dword ptr [ecx]
// 006fdb95  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006fdb98  ffd0                 call eax
// 006fdb9a  8b10                 mov edx, dword ptr [eax]
// 006fdb9c  8b5264               mov edx, dword ptr [edx + 0x64]
// 006fdb9f  8d4c2408             lea ecx, [esp + 8]
// 006fdba3  51                   push ecx
// 006fdba4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fdba8  57                   push edi
// 006fdba9  51                   push ecx
// 006fdbaa  8bc8                 mov ecx, eax
// 006fdbac  ffd2                 call edx
// 006fdbae  5f                   pop edi
// 006fdbaf  5e                   pop esi
// 006fdbb0  83c410               add esp, 0x10
// 006fdbb3  c20400               ret 4

extern "C" int __stdcall IsRectEmpty(const void*);

struct CXTPTabManagerNavigateButton {
    char pad[0x10];
    int rect[4];
    void* pManager;
    void OnDraw(int param);
};

void CXTPTabManagerNavigateButton::OnDraw(int param) {
    if (IsRectEmpty(&rect[0]) == 0) {
        int r[4];
        r[0] = rect[0];
        r[1] = rect[1];
        r[2] = rect[2];
        r[3] = rect[3];
        void* p = pManager;
        void* v = (*(void***)p)[0x2c / 4];
        void* result = ((void* (__thiscall*)(void*))v)(p);
        void* vt = *(void**)result;
        void* fn = ((void**)vt)[0x64 / 4];
        ((void (__thiscall*)(void*, int, void*, int*))fn)(result, param, this, r);
    }
}
