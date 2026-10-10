// from server: 37% by colin
struct VReplicatorSignalDesc {
    void construct();
};

extern "C" void __cdecl sub_542520();
extern "C" void* __cdecl sub_499080();

void VReplicatorSignalDesc::construct()
{
    sub_542520();
    *(int*)((char*)this + 0x00) = 0x79db3c;
    *(int*)((char*)this + 0x04) = 0x79db34;
    *(int*)((char*)this + 0x10) = 0x79db2c;
    *(int*)((char*)this + 0x14) = 0x79db1c;
    *(int*)((char*)this + 0x2c) = 0x79db0c;
    *(int*)((char*)this + 0x44) = 0x79dafc;
    *(int*)((char*)this + 0x5c) = 0x79daec;
    *(int*)((char*)this + 0x74) = 0x79dadc;
    *(int*)((char*)this + 0x8c) = 0x79dacc;
    *(void**)((char*)this + 0x0c) = sub_499080();
}
