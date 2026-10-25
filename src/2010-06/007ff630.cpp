// from server: 100% by atomic.potato
// roc 2010-06 007ff630  unit: CXTPPrintingDialog  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff630
//
// 007ff630  8b442404             mov eax, dword ptr [esp + 4]
// 007ff634  56                   push esi
// 007ff635  8bf1                 mov esi, ecx
// 007ff637  c70648fca500         mov dword ptr [esi], 0xa5fc48
// 007ff63d  85c0                 test eax, eax
// 007ff63f  7403                 je 0x7ff644
// 007ff641  8b4004               mov eax, dword ptr [eax + 4]
// 007ff644  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ff648  894604               mov dword ptr [esi + 4], eax
// 007ff64b  85c9                 test ecx, ecx
// 007ff64d  7511                 jne 0x7ff660
// 007ff64f  51                   push ecx
// 007ff650  50                   push eax
// 007ff651  ff15c8a09e00         call dword ptr [0x9ea0c8]
// 007ff657  894608               mov dword ptr [esi + 8], eax
// 007ff65a  8bc6                 mov eax, esi
// 007ff65c  5e                   pop esi
// 007ff65d  c20800               ret 8
// 007ff660  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ff663  51                   push ecx
// 007ff664  50                   push eax
// 007ff665  ff15c8a09e00         call dword ptr [0x9ea0c8]
// 007ff66b  894608               mov dword ptr [esi + 8], eax
// 007ff66e  8bc6                 mov eax, esi
// 007ff670  5e                   pop esi
// 007ff671  c20800               ret 8

extern "C" void* (__stdcall *SelectObject)(void*, void*);

struct CXTPPrintingDialog {
    void* vtable;
    void* field_4;
    void* field_8;
    CXTPPrintingDialog(void* a, void* b);
};

CXTPPrintingDialog::CXTPPrintingDialog(void* a, void* b) {
    vtable = (void*)0xa5fc48;
    void* p = a;
    if (p != 0)
        p = *(void**)((char*)p + 4);
    field_4 = p;
    void* q = b;
    if (q == 0) {
        field_8 = SelectObject(p, q);
    } else {
        q = *(void**)((char*)q + 4);
        field_8 = SelectObject(p, q);
    }
}
