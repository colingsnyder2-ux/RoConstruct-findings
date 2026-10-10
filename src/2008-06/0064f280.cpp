// from server: 62% by atomic.potato
struct ImageTarget
{
    void* SetImage(void *);
};

struct UnifiedImageWidget
{
    void* SetImage(void *);
};

void* UnifiedImageWidget::SetImage(void *image)
{
    ((ImageTarget *)((char *)this + 0x148))->SetImage(image);

    return this;
}
