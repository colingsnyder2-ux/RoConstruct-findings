// from server: 100% by king_originala
// roc 2008-06 00435e70  unit: CDeclarationView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435e70
//
// 00435e70  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00435e76  85c9                 test ecx, ecx
// 00435e78  741a                 je 0x435e94
// 00435e7a  8b442404             mov eax, dword ptr [esp + 4]
// 00435e7e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00435e81  52                   push edx
// 00435e82  e8d9f9ffff           call 0x435860
// 00435e87  8b442408             mov eax, dword ptr [esp + 8]
// 00435e8b  c70000000000         mov dword ptr [eax], 0
// 00435e91  c20800               ret 8
// 00435e94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00435e98  c70100000000         mov dword ptr [ecx], 0
// 00435e9e  c20800               ret 8

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
