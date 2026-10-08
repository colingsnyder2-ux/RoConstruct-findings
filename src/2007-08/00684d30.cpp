// from server: 78% by colin
// roc 2007-08 00684d30  unit: CXTPPropertyGrid  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684d30
//
// 00684d30  c7011cf47c00         mov dword ptr [ecx], 0x7cf41c
// 00684d36  83c108               add ecx, 8
// 00684d39  ff25bcdd7700         jmp dword ptr [0x77ddbc]

struct CXTPPropertyGrid
{
    void SetPaintManager(void* p);
};

extern "C" void __stdcall sub_77ddbc(void*);

void CXTPPropertyGrid::SetPaintManager(void* p)
{
    *(void**)this = (void*)0x7cf41c;
    sub_77ddbc((char*)this + 8);
}
