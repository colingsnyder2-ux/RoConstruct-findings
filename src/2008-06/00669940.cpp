// from server: 26% by colin
struct Item;

struct TreeStage;

struct Container {
    void remove(Item** item);
};

struct Owner {
    void remove(Item* item);
};

struct Item {
    virtual void release(unsigned int flags);
    TreeStage* parent;
    void detach(int stage);
};

struct TreeStage {
    void remove(Item* item);
    void detach(Item* item, int stage);
    void removeFromPipeline(Item* item);
};

void TreeStage::remove(Item* item)
{
    if (item) {
        item->release(0);
        item->parent = 0;
    }
}

void TreeStage::detach(Item* item, int stage)
{
    if (item) {
        item->release(0);
        item->parent = 0;
    }
}

void TreeStage::removeFromPipeline(Item* item)
{
    if (item) {
        item->release(0);
        item->parent = 0;
    }
}
