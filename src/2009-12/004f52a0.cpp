// from server: 80% by atomic.potato
struct GfxAttachement
{
    int value;
    void GetValue(int* result);
};

void GfxAttachement::GetValue(int* result)
{
    *result = *(int*)((char*)this + 0xac);
}
