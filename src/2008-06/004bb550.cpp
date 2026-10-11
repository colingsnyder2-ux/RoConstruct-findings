// from server: 55% by colin
struct RakPeerInterface {
    int compare(const void* other) const;
};

extern "C" int __fastcall sub_4A9880(const RakPeerInterface* self, const void* other);
extern "C" int __fastcall sub_4A9820(const RakPeerInterface* self, const void* other);

int RakPeerInterface::compare(const void* other) const {
    if (sub_4A9880(this, other))
        return -1;
    return sub_4A9820(this, other) == 0;
}
