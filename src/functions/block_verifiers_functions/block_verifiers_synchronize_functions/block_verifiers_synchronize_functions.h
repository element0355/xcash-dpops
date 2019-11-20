#ifndef BLOCK_VERIFIERS_SYNCHRONIZE_FUNCTIONS_H_   /* Include guard */
#define BLOCK_VERIFIERS_SYNCHRONIZE_FUNCTIONS_H_

/*
-----------------------------------------------------------------------------------------------------------
Function prototypes
-----------------------------------------------------------------------------------------------------------
*/

void sync_network_data_nodes_database(void);
int sync_all_block_verifiers_list(void);
int get_synced_block_verifiers(void);
int sync_reserve_proofs_database(int settings);
int sync_reserve_bytes_database(int settings, const int reserve_bytes_start_settings);
int sync_delegates_database(int settings);
int sync_statistics_database(int settings);
#endif