// from server: 25% by colin
// roc 2008-06 005f25c0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f25c0
//
// 005f25c0  80790100             cmp byte ptr [ecx + 1], 0
// 005f25c4  7404                 je 0x5f25ca
// 005f25c6  c6410100             mov byte ptr [ecx + 1], 0
// 005f25ca  c3                   ret 

struct Uinput {
    struct V {
        struct chain {
            struct chain_client {
                char flag;
                void setFlag() {
                    if (this->flag == 0) {
                        this->flag = 1;
                    } else {
                        this->flag = 0;
                    }
                }
            };
        };
    };
};

extern "C" __declspec(dllimport) void __stdcall SetFlag(Uinput::V::chain::chain_client* client);

void func_005f25c0(Uinput::V::chain::chain_client* client) {
    if (client->flag == 0) {
        client->flag = 1;
    } else {
        client->flag = 0;
    }
    SetFlag(client);
}
