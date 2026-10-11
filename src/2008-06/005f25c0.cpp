// from server: 100% by Cezant64gamejr
// roc 2008-06 005f25c0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f25c0
//
// 005f25c0  80790100             cmp byte ptr [ecx + 1], 0
// 005f25c4  7404                 je 0x5f25ca
// 005f25c6  c6410100             mov byte ptr [ecx + 1], 0
// 005f25ca  c3                   ret 

struct S {
    void f() {
        if (this->byteAtOffset1() != 0) {
            this->byteAtOffset1() = 0;
        }
    }

    unsigned char& byteAtOffset1() {
        return *(unsigned char*)((char*)this + 1);
    }
};

int main() {
    S s;
    s.f();
    return 0;
}
