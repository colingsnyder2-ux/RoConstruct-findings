// roc 2011-06 0043fdd0  unit: CDeclarationView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043fdd0
//
// 0043fdd0  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0043fdd6  85c9                 test ecx, ecx
// 0043fdd8  741a                 je 0x43fdf4
// 0043fdda  8b442404             mov eax, dword ptr [esp + 4]
// 0043fdde  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0043fde1  52                   push edx
// 0043fde2  e8d9f9ffff           call 0x43f7c0
// 0043fde7  8b442408             mov eax, dword ptr [esp + 8]
// 0043fdeb  c70000000000         mov dword ptr [eax], 0
// 0043fdf1  c20800               ret 8
// 0043fdf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043fdf8  c70100000000         mov dword ptr [ecx], 0
// 0043fdfe  c20800               ret 8
// copied from an identical function in another client (function ?process@CDeclarationView@ns_ROCX000017@@QAEXPAUInput@2@PAH@Z)

namespace ns_ROCX000017 {
struct Input {
    char padding[0x5c];
    int value;
};

struct Handler {
    void handle(int value);
};

struct CDeclarationView {
    char padding[0xb0];
    Handler* handler;

    void process(Input* input, int* result);
};

void CDeclarationView::process(Input* input, int* result)
{
    if (handler)
        handler->handle(input->value);
    *result = 0;
}
}
