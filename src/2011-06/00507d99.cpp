// from server: 50% by colin
// roc 2011-06 00507d99  unit: RBX::Network::Replicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00507d99
//
// 00507d99  33c0                 xor eax, eax
// 00507d9b  e9a8feffff           jmp 0x507c48

struct Replicator {
    // Placeholder for the actual structure
};

extern "C" __declspec(dllimport) void __cdecl func_507c48();

int f() {
    int eax = 0;
    func_507c48();
    return eax;
}
