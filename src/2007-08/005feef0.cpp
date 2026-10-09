// from server: 81% by colin
// roc 2007-08 005feef0  unit: RBX::AxisMoveTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005feef0
//
// 005feef0  53                   push ebx
// 005feef1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005feef5  85db                 test ebx, ebx
// 005feef7  56                   push esi
// 005feef8  57                   push edi
// 005feef9  8bf1                 mov esi, ecx
// 005feefb  7408                 je 0x5fef05
// 005feefd  8dbb4c010000         lea edi, [ebx + 0x14c]
// 005fef03  eb02                 jmp 0x5fef07
// 005fef05  33ff                 xor edi, edi
// 005fef07  83ec1c               sub esp, 0x1c
// 005fef0a  8bcc                 mov ecx, esp
// 005fef0c  8964242c             mov dword ptr [esp + 0x2c], esp
// 005fef10  68a8277c00           push 0x7c27a8
// 005fef15  ff1598e67700         call dword ptr [0x77e698]
// 005fef1b  57                   push edi
// 005fef1c  8bce                 mov ecx, esi
// 005fef1e  e82d5df6ff           call 0x564c50
// 005fef23  5f                   pop edi
// 005fef24  895e0c               mov dword ptr [esi + 0xc], ebx
// 005fef27  c70694277c00         mov dword ptr [esi], 0x7c2794
// 005fef2d  8bc6                 mov eax, esi
// 005fef2f  5e                   pop esi
// 005fef30  5b                   pop ebx
// 005fef31  c20400               ret 4

struct RBX_AxisMoveTool {
    void construct(void*);
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void __fastcall sub_564C50(void*, void*);

void RBX_AxisMoveTool::construct(void* other)
{
    void* p;
    if (other != 0) {
        p = (char*)other + 0x14c;
    } else {
        p = 0;
    }

    char buf[0x1c];
    sub_77E698("Redo");
    sub_564C50(this, p);
    this->fieldC = other;
    this->field0 = (void*)0x7c2794;
}
