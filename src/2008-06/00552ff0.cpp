// from server: 27% by colin
struct RBX_RenderBase_AggregateChunk {
    char pad[0x10];
    int field_0x10;
    bool sub_553160(int);
    int sub_5531e0(int, int, int);
    bool method(int, int);
};

bool RBX_RenderBase_AggregateChunk::method(int a, int b) {
    if (!this->sub_553160(a))
        return false;
    int r = this->sub_5531e0(this->field_0x10, a, b);
    this->field_0x10 = r;
    return true;
}
