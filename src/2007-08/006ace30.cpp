// from server: 76% by colin
// roc 2007-08 006ace30  unit: CXTPRibbonBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ace30
//
// 006ace30  51                   push ecx
// 006ace31  56                   push esi
// 006ace32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ace36  83c128               add ecx, 0x28
// 006ace39  51                   push ecx
// 006ace3a  8bce                 mov ecx, esi
// 006ace3c  c744240800000000     mov dword ptr [esp + 8], 0
// 006ace44  ff1574dd7700         call dword ptr [0x77dd74]
// 006ace4a  8bc6                 mov eax, esi
// 006ace4c  5e                   pop esi
// 006ace4d  59                   pop ecx
// 006ace4e  c20400               ret 4

struct CXTPRibbonBar {
    void* sub_006ACE30(void*);
};

extern "C" void* __stdcall sub_77DD74(void*, void*);

void* CXTPRibbonBar::sub_006ACE30(void* a) {
    void* local = 0;
    sub_77DD74((char*)this + 0x28, &local);
    return a;
}
