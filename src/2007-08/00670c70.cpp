// from server: 88% by colin
// roc 2007-08 00670c70  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670c70
//
// 00670c70  e85bffffff           call 0x670bd0
// 00670c75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00670c79  8988f8000000         mov dword ptr [eax + 0xf8], ecx
// 00670c7f  c3                   ret 

struct CXTPToolBar_CControlButtonExpand {
    void setValue(void* value);
};

extern "C" void* __cdecl sub_00670bd0();

void CXTPToolBar_CControlButtonExpand::setValue(void* value)
{
    char* p = (char*)sub_00670bd0();
    *(void**)(p + 0xf8) = value;
}
