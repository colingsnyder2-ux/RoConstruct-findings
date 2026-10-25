// from server: 100% by colin
// roc 2008-06 0060dd60  unit: RBX::BlockBlockContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dd60
//
// 0060dd60  83c108               add ecx, 8
// 0060dd63  51                   push ecx
// 0060dd64  e8c7100000           call 0x60ee30
// 0060dd69  59                   pop ecx
// 0060dd6a  c3                   ret 

struct Contact {
    char pad[8];
};

struct BlockBlockContact {
    void generateDataForMovingAssemblyStage();
};

extern "C" void __cdecl sub_60EE30(Contact*);

void BlockBlockContact::generateDataForMovingAssemblyStage() {
    sub_60EE30((Contact*)((char*)this + 8));
}
