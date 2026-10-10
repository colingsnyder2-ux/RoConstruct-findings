// from server: 85% by why2
struct ClientReplicator
{
    char pad[0x830];
    int field_830;
    int field_834;
    long long func_004f53d0();
};

long long ClientReplicator::func_004f53d0()
{
    long long result;
    *(int*)&result = field_830;
    *(int*)((char*)&result + 4) = field_834;
    return result;
}
