// from server: 81% by colin
struct RBX_Render_AggregateChunk
{
    char pad0[0xc];
    float field_c;
    char pad10[0x30];
    float field_40;
    float field_44;
    float field_48;
};

extern double G_00792af8;
extern double G_0079f8c8;

int compare_chunks(RBX_Render_AggregateChunk* a, RBX_Render_AggregateChunk* b)
{
    double v1 = (double)(a->field_44 + a->field_40 + a->field_48) / G_00792af8;
    double v2 = G_0079f8c8 - (double)a->field_c;
    double v3 = v2 * v1;

    double v4 = (double)(b->field_44 + b->field_40 + b->field_48) / G_00792af8;
    double v5 = G_0079f8c8 - (double)b->field_c;
    double v6 = v5 * v4;

    if (v3 != v6)
        return 1;
    return 0;
}
