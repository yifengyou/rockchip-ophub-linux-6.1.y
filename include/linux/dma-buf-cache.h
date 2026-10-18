/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Minimal stub for dma-buf-cache.h — vendor rockchip DRM drivers include
 * this header but don't call any of its functions in our build config.
 * We provide empty stubs so the drivers compile without pulling in the
 * vendor dma-buf cache subsystem (which requires a patched dma-buf.h).
 */
#ifndef _LINUX_DMA_BUF_CACHE_H
#define _LINUX_DMA_BUF_CACHE_H

#include <linux/dma-buf.h>

static inline void dma_buf_cache_detach(struct dma_buf *dmabuf,
					struct dma_buf_attachment *attach) {}
static inline void dma_buf_cache_unmap_attachment(struct dma_buf_attachment *attach,
						  enum dma_data_direction dir) {}
static inline struct dma_buf_attachment *
dma_buf_cache_attach(struct dma_buf *dmabuf, struct device *dev)
{ return dma_buf_attach(dmabuf, dev); }
static inline struct sg_table *
dma_buf_cache_map_attachment(struct dma_buf_attachment *attach,
			     enum dma_data_direction dir)
{ return dma_buf_map_attachment(attach, dir); }

#endif /* _LINUX_DMA_BUF_CACHE_H */
