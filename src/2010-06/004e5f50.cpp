// from server: 66% by colin
// roc 2010-06 004e5f50  unit: RBX::Network::Replicator  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e5f50
//
// 004e5f50  8b442404             mov eax, dword ptr [esp + 4]
// 004e5f54  c3                   ret 

struct RBX_Network_Replicator {
    int f(int);
};

int RBX_Network_Replicator::f(int a) {
    return a;
}
