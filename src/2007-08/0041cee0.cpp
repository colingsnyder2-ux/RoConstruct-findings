// from server: 50% by colin
// roc 2007-08 0041cee0  unit: InsertDecal  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041cee0
//
// 0041cee0  8b442404             mov eax, dword ptr [esp + 4]
// 0041cee4  56                   push esi
// 0041cee5  50                   push eax
// 0041cee6  83ec1c               sub esp, 0x1c
// 0041cee9  8bf1                 mov esi, ecx
// 0041ceeb  8bcc                 mov ecx, esp
// 0041ceed  89642428             mov dword ptr [esp + 0x28], esp
// 0041cef1  68f87a7800           push 0x787af8
// 0041cef6  ff1598e67700         call dword ptr [0x77e698]
// 0041cefc  8bce                 mov ecx, esi
// 0041cefe  e86d231400           call 0x55f270
// 0041cf03  c706e47a7800         mov dword ptr [esi], 0x787ae4
// 0041cf09  8bc6                 mov eax, esi
// 0041cf0b  5e                   pop esi
// 0041cf0c  c20400               ret 4

struct InsertDecal {
    char pad[0x54];
    InsertDecal(const char*);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);
extern "C" void __fastcall sub_55F270(void*, void*);

InsertDecal::InsertDecal(const char* name) {
    char buf[0x1c];
    sub_77E698(buf, "Insert Object");
    sub_55F270(this, buf);
    *(void**)this = (void*)0x787ae4;
}
