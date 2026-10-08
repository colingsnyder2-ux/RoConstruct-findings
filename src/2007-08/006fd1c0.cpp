// from server: 93% by colin
// roc 2007-08 006fd1c0  unit: CXTPTabManagerItem  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd1c0
//
// 006fd1c0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006fd1c3  c701b4cd7d00         mov dword ptr [ecx], 0x7dcdb4
// 006fd1c9  394810               cmp dword ptr [eax + 0x10], ecx
// 006fd1cc  7507                 jne 0x6fd1d5
// 006fd1ce  c7401000000000       mov dword ptr [eax + 0x10], 0
// 006fd1d5  83c128               add ecx, 0x28
// 006fd1d8  ff25bcdd7700         jmp dword ptr [0x77ddbc]

struct CXTPTabManagerItem {
    void* vtbl;
    char pad[8];
    struct CXTPTabManager* manager;
    void setManager(CXTPTabManager* m);
};

struct CXTPTabManager {
    char pad[0x10];
    CXTPTabManagerItem* item;
};

extern "C" void __fastcall sub_77ddbc(void*);

void CXTPTabManagerItem::setManager(CXTPTabManager* m)
{
    CXTPTabManager* old = this->manager;
    this->vtbl = (void*)0x7dcdb4;
    if (old->item == this)
        old->item = 0;
    sub_77ddbc((char*)this + 0x28);
}
