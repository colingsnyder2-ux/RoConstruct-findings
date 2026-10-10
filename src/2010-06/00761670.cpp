// from server: 74% by atomic.potato
struct GroundStage
{
    void removeFromStage(void *);
};

extern "C" void removeFromStageImpl(void *);

void GroundStage::removeFromStage(void *stage)
{
    removeFromStageImpl(stage);
}
