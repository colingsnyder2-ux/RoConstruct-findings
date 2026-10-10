// from server: 50% by colin
// roc 2007-08 006f48f0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f48f0

extern "C" void* __stdcall sub_738808(unsigned int, unsigned int, unsigned int);
extern "C" void __fastcall sub_6f4400(void*);
extern "C" void __fastcall sub_6305da(void*);

struct CXTPCustomizeToolbarsPageCheckListBox {
    void* field_0;
    char pad_4[0x84];
    void* field_88;
    char pad_8c[0x6c];
    void* field_f8;
    char pad_fc[0x50];
    void* field_14c;
    char pad_150[0x50];
    void* field_1a0;
    char pad_1a4[0x50];
    void* field_1f4;

    CXTPCustomizeToolbarsPageCheckListBox* __stdcall ctor(void* arg);
};

CXTPCustomizeToolbarsPageCheckListBox* __stdcall CXTPCustomizeToolbarsPageCheckListBox::ctor(void* arg) {
    sub_738808(0x239d, 0, 0x30);
    this->field_0 = (void*)0x7dbe54;
    this->field_88 = arg;
    sub_6f4400((char*)this + 0x8c);
    sub_6305da((char*)this + 0xf8);
    *(void**)((char*)this + 0xf8) = (void*)0x7c7944;
    sub_6305da((char*)this + 0x14c);
    *(void**)((char*)this + 0x14c) = (void*)0x7c7944;
    sub_6305da((char*)this + 0x1a0);
    *(void**)((char*)this + 0x1a0) = (void*)0x7c7944;
    sub_6305da((char*)this + 0x1f4);
    *(void**)((char*)this + 0x1f4) = (void*)0x7c7944;
    return this;
}
