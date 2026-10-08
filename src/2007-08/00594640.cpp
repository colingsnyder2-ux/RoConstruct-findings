// from server: 77% by colin
// roc 2007-08 00594640  unit: RBX::StudsTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594640
//
// 00594640  51                   push ecx
// 00594641  56                   push esi
// 00594642  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594646  6814077b00           push 0x7b0714
// 0059464b  8bce                 mov ecx, esi
// 0059464d  c744240800000000     mov dword ptr [esp + 8], 0
// 00594655  ff1598e67700         call dword ptr [0x77e698]
// 0059465b  8bc6                 mov eax, esi
// 0059465d  5e                   pop esi
// 0059465e  59                   pop ecx
// 0059465f  c20400               ret 4

struct StudsTool {
    void construct(char* workspace);
};

extern "C" void __stdcall std_string_ctor(void* self, const char* s);

void StudsTool::construct(char* workspace)
{
    char buf[4];
    *(int*)buf = 0;
    std_string_ctor(buf, "StudsCursor");
    *(char**)workspace = (char*)this;
}
