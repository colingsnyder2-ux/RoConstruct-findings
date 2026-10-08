// from server: 75% by colin
// roc 2007-08 0055cd90  unit: RBX::DataModel  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055cd90
//
// 0055cd90  8b442404             mov eax, dword ptr [esp + 4]
// 0055cd94  56                   push esi
// 0055cd95  50                   push eax
// 0055cd96  8bf1                 mov esi, ecx
// 0055cd98  e8337affff           call 0x5547d0
// 0055cd9d  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 0055cda3  8d8e60010000         lea ecx, [esi + 0x160]
// 0055cda9  5e                   pop esi
// 0055cdaa  c744240401000000     mov dword ptr [esp + 4], 1
// 0055cdb2  8b4204               mov eax, dword ptr [edx + 4]
// 0055cdb5  ffe0                 jmp eax

struct DataModel {
    void method(int);
};

extern "C" void __stdcall helper_5547d0(int);

void DataModel::method(int arg) {
    helper_5547d0(arg);
    int* p = *(int**)((char*)this + 0x160);
    *(int*)((char*)this + 0x160) = 1;
    void (*fn)() = *(void(**)())((char*)p + 4);
    fn();
}
