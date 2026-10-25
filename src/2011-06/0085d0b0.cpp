// from server: 100% by atomic.potato
// roc 2011-06 0085d0b0  unit: CXTPPrintingDialog  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085d0b0
//
// 0085d0b0  8b442404             mov eax, dword ptr [esp + 4]
// 0085d0b4  56                   push esi
// 0085d0b5  8bf1                 mov esi, ecx
// 0085d0b7  c70638a5ac00         mov dword ptr [esi], 0xaca538
// 0085d0bd  85c0                 test eax, eax
// 0085d0bf  7403                 je 0x85d0c4
// 0085d0c1  8b4004               mov eax, dword ptr [eax + 4]
// 0085d0c4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d0c8  894604               mov dword ptr [esi + 4], eax
// 0085d0cb  85c9                 test ecx, ecx
// 0085d0cd  7511                 jne 0x85d0e0
// 0085d0cf  51                   push ecx
// 0085d0d0  50                   push eax
// 0085d0d1  ff158c01a400         call dword ptr [0xa4018c]
// 0085d0d7  894608               mov dword ptr [esi + 8], eax
// 0085d0da  8bc6                 mov eax, esi
// 0085d0dc  5e                   pop esi
// 0085d0dd  c20800               ret 8
// 0085d0e0  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085d0e3  51                   push ecx
// 0085d0e4  50                   push eax
// 0085d0e5  ff158c01a400         call dword ptr [0xa4018c]
// 0085d0eb  894608               mov dword ptr [esi + 8], eax
// 0085d0ee  8bc6                 mov eax, esi
// 0085d0f0  5e                   pop esi
// 0085d0f1  c20800               ret 8

extern "C" void* (__stdcall *SelectObject)(void*, void*);

struct CXTPPrintingDialog {
    void* vftable;
    void* field_4;
    void* field_8;
    CXTPPrintingDialog* sub_85D0B0(void*, void*);
};

CXTPPrintingDialog* CXTPPrintingDialog::sub_85D0B0(void* param1, void* param2) {
    this->vftable = (void*)0xaca538;
    void* v = param1;
    if (v != 0) {
        v = *(void**)((char*)v + 4);
    }
    this->field_4 = v;
    void* h = param2;
    if (h == 0) {
        this->field_8 = SelectObject(v, h);
        return this;
    }
    h = *(void**)((char*)h + 4);
    this->field_8 = SelectObject(v, h);
    return this;
}
