// from server: 66% by colin
// roc 2007-08 006e4440  unit: CXTPDockingPaneSplitterContainer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4440
//
// 006e4440  8b5108               mov edx, dword ptr [ecx + 8]
// 006e4443  8b4204               mov eax, dword ptr [edx + 4]
// 006e4446  85c0                 test eax, eax
// 006e4448  56                   push esi
// 006e4449  8b7208               mov esi, dword ptr [edx + 8]
// 006e444c  894108               mov dword ptr [ecx + 8], eax
// 006e444f  7410                 je 0x6e4461
// 006e4451  52                   push edx
// 006e4452  c70000000000         mov dword ptr [eax], 0
// 006e4458  e87338ffff           call 0x6d7cd0
// 006e445d  8bc6                 mov eax, esi
// 006e445f  5e                   pop esi
// 006e4460  c3                   ret 
// 006e4461  52                   push edx
// 006e4462  c7410400000000       mov dword ptr [ecx + 4], 0
// 006e4469  e86238ffff           call 0x6d7cd0
// 006e446e  8bc6                 mov eax, esi
// 006e4470  5e                   pop esi
// 006e4471  c3                   ret 

struct CXTPDockingPaneSplitterContainer {
    char pad[4];
    void* field4;
    void* field8;
    void* remove();
};

extern "C" void __stdcall sub_6d7cd0(void* p);

void* CXTPDockingPaneSplitterContainer::remove() {
    void* edx = this->field8;
    void* eax = *(void**)((char*)edx + 4);
    void* esi = *(void**)((char*)edx + 8);
    this->field8 = eax;
    if (eax != 0) {
        *(void**)eax = 0;
        sub_6d7cd0(edx);
    } else {
        this->field4 = 0;
        sub_6d7cd0(edx);
    }
    return esi;
}
