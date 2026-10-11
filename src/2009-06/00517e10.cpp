// from server: 64% by atomic.potato
struct RBX_PartChunk_00517e10 {
    char pad[0x8c];
    int m_field_8c;
    virtual void* vf_30(int, int, int);
};

void* __fastcall sub_00517e10(RBX_PartChunk_00517e10* self, void* unused, void* out)
{
    int zero = 0;
    self->vf_30(self->m_field_8c, (int)out, zero);
    return out;
}
