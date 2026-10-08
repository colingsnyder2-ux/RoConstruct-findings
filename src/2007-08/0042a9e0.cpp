// from server: 100% by colin
// roc 2007-08 0042a9e0  unit: EventHandler  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a9e0
//
// 0042a9e0  8b442408             mov eax, dword ptr [esp + 8]
// 0042a9e4  c70000000000         mov dword ptr [eax], 0
// 0042a9ea  33c0                 xor eax, eax
// 0042a9ec  c20800               ret 8

struct EventHandler {
    int setFlag(int unused, int* out);
};

int EventHandler::setFlag(int unused, int* out) {
    *out = 0;
    return 0;
}
