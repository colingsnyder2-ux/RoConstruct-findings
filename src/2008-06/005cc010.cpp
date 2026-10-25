// from server: 100% by tester
// roc 2008-06 005cc010  unit: RBX::Camera  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc010
//
// 005cc010  8b442404             mov eax, dword ptr [esp + 4]
// 005cc014  d900                 fld dword ptr [eax]
// 005cc016  89442404             mov dword ptr [esp + 4], eax
// 005cc01a  d999c8010000         fstp dword ptr [ecx + 0x1c8]
// 005cc020  81c174010000         add ecx, 0x174
// 005cc026  d94004               fld dword ptr [eax + 4]
// 005cc029  d95958               fstp dword ptr [ecx + 0x58]
// 005cc02c  d94008               fld dword ptr [eax + 8]
// 005cc02f  d9595c               fstp dword ptr [ecx + 0x5c]
// 005cc032  e9e9cdf4ff           jmp 0x518e20

struct V3 { float x, y, z; };
struct Sub {
    char pad[0x58];
    float ay, az;
    void update(const V3& v);
};
struct Cam {
    char pad[0x174];
    Sub sub;
    float tail;
    void lookAt(const V3& v);
};
void Cam::lookAt(const V3& v) {
    *(float*)((char*)this + 0x1c8) = v.x;
    sub.ay = v.y;
    sub.az = v.z;
    sub.update(v);
}
