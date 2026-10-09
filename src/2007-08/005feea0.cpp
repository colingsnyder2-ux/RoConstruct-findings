// from server: 84% by colin
// roc 2007-08 005feea0  unit: RBX::AxisMoveTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005feea0
//
// 005feea0  53                   push ebx
// 005feea1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005feea5  85db                 test ebx, ebx
// 005feea7  56                   push esi
// 005feea8  57                   push edi
// 005feea9  8bf1                 mov esi, ecx
// 005feeab  7408                 je 0x5feeb5
// 005feead  8dbb4c010000         lea edi, [ebx + 0x14c]
// 005feeb3  eb02                 jmp 0x5feeb7
// 005feeb5  33ff                 xor edi, edi
// 005feeb7  83ec1c               sub esp, 0x1c
// 005feeba  8bcc                 mov ecx, esp
// 005feebc  8964242c             mov dword ptr [esp + 0x2c], esp
// 005feec0  6888277c00           push 0x7c2788
// 005feec5  ff1598e67700         call dword ptr [0x77e698]
// 005feecb  57                   push edi
// 005feecc  8bce                 mov ecx, esi
// 005feece  e87d5df6ff           call 0x564c50
// 005feed3  5f                   pop edi
// 005feed4  895e0c               mov dword ptr [esi + 0xc], ebx
// 005feed7  c70674277c00         mov dword ptr [esi], 0x7c2774
// 005feedd  8bc6                 mov eax, esi
// 005feedf  5e                   pop esi
// 005feee0  5b                   pop ebx
// 005feee1  c20400               ret 4

struct AxisMoveTool {
    char pad[0xc];
    void* field_c;
    void construct(void*);
};

extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void sub_564C50(void*, void*);

void AxisMoveTool::construct(void* arg) {
    char* base = (char*)arg;
    char* p = base ? base + 0x14c : 0;
    char buf[0x1c];
    sub_77E698("Undo");
    sub_564C50(this, p);
    field_c = arg;
    *(void**)this = (void*)0x7c2774;
}
